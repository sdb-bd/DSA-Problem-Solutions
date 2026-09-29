# problem link: https://www.hackerrank.com/contests/ai-ml-module-4-practice-day-1/challenges/ai-mood-detector/problem?isFullScreen=true

message = input()
if "happy" in message or "joy" in message or "smile" in message:
    print("Happy Mood")
elif "sad" in message or "cry" in message or "angry" in message:
    print("Sad Mood")
else:
    print("Neutral Mood")
    