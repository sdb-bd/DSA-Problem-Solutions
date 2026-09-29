# Problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/p2-a3-ai-bias-detector/problem?isFullScreen=true

prediction = input().split()

total = len(prediction)
a_count = prediction.count("A")
b_count = prediction.count("B")

if a_count > 0.7 * total or b_count > 0.7 * total:
    print("Biased Model")
else:
    print("Fair Model")