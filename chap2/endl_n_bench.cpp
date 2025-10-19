# include <chrono>
# include <fstream>
# include <iostream>
# include <sstream>
# include <string>
# include <vector>

std::chrono::duration<double, std::milli> bench_newline(std::ostream& os, std::size_t lines)
{
    const auto start = std::chrono::steady_clock::now();
    for (std::size_t i = 0; i < lines; ++i)
    {
        os << "hello\n";
    }
    os.flush();
    const auto end = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(end - start);
}

std::chrono::duration<double, std::milli> bench_endl(std::ostream& os, std::size_t lines)
{
    const auto start = std::chrono::steady_clock::now();
    for (std::size_t i = 0; i < lines; ++i)
    {
        os << "hello" << std::endl;
    }
    os.flush();
    const auto end = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(end - start);
}

int main(int argc, char** argv) {
    std::size_t lines = 2000000;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::ofstream ofs;
    std::ostream* out = nullptr;

    ofs.open("/dev/null", std::ios::out | std::ios::binary);
    if (!ofs) {
        std::cerr << "oi!\n";
    }
    out = &ofs;

    const std::chrono::duration<double, std::milli> t_newline_dev = bench_newline(*out, lines);
    const std::chrono::duration<double, std::milli> t_endl_dev = bench_endl(*out, lines);

    std::cout.setf(std::ios::fixed);
    std::cout.precision(3);
    std::cout << "lines            : " << lines << "\n";
    std::cout << "[device] '\\n'    : " << t_newline_dev.count() << " ms\n";
    std::cout << "[device] endl    : " << t_endl_dev.count()    << " ms\n";
}