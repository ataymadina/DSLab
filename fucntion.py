def fibo(no):
    if(no is 0):
        return 0
    elif(no is 1):
        return 1
    else: return (fibo(no-1)+fibo(no-2))
def main():
    n=int(input("enter the nth term of fabonacci series"))
    for i in range(n):
        ans=fibo(i)
    print("fibonacci series =%d"%ans)
main()
