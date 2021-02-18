import random
n1,n2,s = input().split(' ')
n1 = int(n1)
n2 = int(n2)
s = int(s)
#print(n)
#print(s)
random.seed(s)
p = 0
for i in range(n1):
    count1 = 0;
    count2 = 0;
    for j in range(n2):
        val1 = random.randint(0,1)
        val2 = random.randint(0,1)
        print(str(val1)+" "+str(val2))
        if val1 == 0:
            count1 = count1 +1
        elif val1 == 1:
            count1 = count1 -1
        if val2 == 0:
            count2 = count2 +1
        elif val2 == 1:
            count2 = count2 -1
        if count1 == 0 and count2==0:
            p = p+1
            break;
print()
print(p/n1)