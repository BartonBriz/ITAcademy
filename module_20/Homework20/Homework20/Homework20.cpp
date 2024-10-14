#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
// use standartd compy C++17 and above 

// use wrtite C:/<path> (D, F, E) 
namespace fs = std::filesystem;

int main() {
    std::string folderName;

    std::cout << "Enter folder name (folder path): ";
    std::getline(std::cin, folderName);

    if (!fs::exists(folderName) || !fs::is_directory(folderName)) {
        std::cout << "The folder does not exist or is not a directory." << std::endl;
        return 1;
    }

    size_t fileCount = 0;
    size_t dirCount = 0;
    std::vector<std::string> exeFiles;

    for (const auto& entry : fs::directory_iterator(folderName)) {
        if (fs::is_directory(entry)) {
            dirCount++;
        }
        else if (fs::is_regular_file(entry)) {
            fileCount++;
            if (entry.path().extension() == ".exe") {
                exeFiles.push_back(entry.path().filename().string());
            }
        }
    }

    std::cout << "Number of files: " << fileCount << std::endl;
    std::cout << "Number of folders: " << dirCount << std::endl;

    if (!exeFiles.empty()) {
        std::cout << "Files with .exe extension:" << std::endl;
        for (const auto& file : exeFiles) {
            std::cout << file << std::endl;
        }
    }
    else {
        std::cout << "No .exe files found." << std::endl;
    }

    return 0;
}
