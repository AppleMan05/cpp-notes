#include <string>
#include <iostream>

namespace Appleman {
 int times_two(int value) {
    return value * 2;
  }
} // end of namespace Appleman

int main() {
    using std::cout;

    // Fails because there is no function in the global namespace
    //  called times_two
    // cout << times_two(64) << '\n';  // Fails

    // Succeeds because there is a function in the Appleman namespace
    //  called times_two
    cout << Appleman::times_two(64) << '\n';

  return 0;
}