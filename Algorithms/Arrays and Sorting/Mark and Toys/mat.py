def markAndToys(priceList,n,k):
    priceList.sort()
    count = 0
    i = 0
    while k>0 and i<n:
        if k>=priceList[i]:
            k-=priceList[i]
            count+=1
        i+=1
    return count

def __main__():
    num = raw_input().split(" ")
    price = [int(x) for x in raw_input().split(" ")]
    print markAndToys(price,int(num[0]),int(num[1]))

if __name__=="__main__":
    __main__()    