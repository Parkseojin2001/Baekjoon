T = int(input())

for i in range(T):
    string = input()
    print(f"{string[0]+string[len(string)-1]}")