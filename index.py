def po(base,index):
    if(index is 0):
        return 1
    elif(index is 1):
        return base
    else:
        return (base*pow(base,index-1))
def main():
    x=int(input("Enter the index"))
    y=int(input("Enter the base"))

    ans=po(x,y)
    print("ans is %d" %ans)
main()
