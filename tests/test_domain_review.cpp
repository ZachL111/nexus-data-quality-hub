#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{62, 23, 22, 66};
    assert(domain_review_score(item) == 147);
    assert(domain_review_lane(item) == "ship");
}
