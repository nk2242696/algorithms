# Enter your code here. Read input from STDIN. Print output to STDOUT
T = int(input())
for tc in range(T):
    N = int(input())
    print(sum(map(int, str(2 ** N))))
