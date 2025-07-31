#include <cstdlib>
#include <iostream>

void solution() {
  size_t case_count;
  std::cin >> case_count;

  int a, b, c, counter = 0;
  for (size_t case_index = 0; case_index < case_count; ++case_index) {
    std::cin >> a >> b >> c;
    if ((a && b) || (a && c) || (b && c)) {
      ++counter;
    }
  }

  std::cout << counter << '\n';
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}