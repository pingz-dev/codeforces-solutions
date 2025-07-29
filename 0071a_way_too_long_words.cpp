#include <cstdlib>
#include <iostream>
#include <string>

void solution() {
  size_t case_count;
  std::cin >> case_count;

  std::string word;
  for (size_t case_index = 0; case_index < case_count; ++case_index) {
    std::cin >> word;
    if (word.length() <= 10) {
      std::cout << word;
    } else {
      std::cout << word.front() << word.length() - 2 << word.back();
    }

    std::cout << '\n';
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}
