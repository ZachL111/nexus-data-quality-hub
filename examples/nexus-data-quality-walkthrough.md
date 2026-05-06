# Nexus Data Quality Hub Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 147 | ship |
| stress | lineage depth | 149 | ship |
| edge | partition skew | 148 | ship |
| recovery | quality gap | 162 | ship |
| stale | schema drift | 211 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
