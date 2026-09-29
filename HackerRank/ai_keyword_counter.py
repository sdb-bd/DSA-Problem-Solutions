# problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/p2-a4-ai-keyword-counter/problem?isFullScreen=true

message = input()
keywords = ["ai", "data", "model", "learn", "train", "neural"]

words = message.split()
count = 0
for word in keywords:
    if word in words:
        count += 1
        
if count >= 2:
    print("AI Detected")
else:
    print("Not AI Related")
    