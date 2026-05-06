# nexus-data-quality-hub

`nexus-data-quality-hub` keeps a focused C++ implementation around data engineering. The project goal is to build a C++ toolkit that studies quality behavior through capacity fixtures, with allocation and spill reports and offline replay mode.

## Use Case

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Nexus Data Quality Hub Review Notes

Start with `schema drift` and `schema drift`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Highlights

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/nexus-data-quality-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Code Layout

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The added C++ path is deliberately direct, with fixtures doing most of the explaining.

## Run The Check

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Regression Path

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Future Work

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
