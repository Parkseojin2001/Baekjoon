N = int(input())

def hanoi(a,b,c,n):
    if(n == 1):
        print(a, c)
    else:
        hanoi(a,c,b,n-1)
        print(a, c)
        hanoi(b,a,c,n-1)

print(2**N-1)
if(N <= 20):
    hanoi(1, 2, 3, N)