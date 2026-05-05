#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{90, 107, 12, 11, 9};
    assert(score_signal(signal_case_1) == 210);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{88, 95, 14, 7, 7};
    assert(score_signal(signal_case_2) == 208);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{79, 105, 15, 25, 9};
    assert(score_signal(signal_case_3) == 79);
    assert(classify_signal(signal_case_3) == "review");
}
