#include <cstdlib>
#include <iostream>

void solution() {
  int weight = 0;
  std::cin >> weight;

  std::string result = ((weight > 2 && weight % 2 == 0) ? "YES" : "NO");
  std::cout << result << '\n';
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}
