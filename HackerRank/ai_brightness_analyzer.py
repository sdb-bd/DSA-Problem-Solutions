# problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/p2-a2-ai-brightness-analyzer/problem?isFullScreen=true
pixels = list(map(int, input().split()))
average = sum(pixels) / len(pixels)

if average < 85:
    print("Dark Image")
elif average <= 170:
    print("Normal Image")
else:
    print("Bright Image")