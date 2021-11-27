def int_in_quat(number):
    s = ""
    while (number != 0):
        s = str(number % 4) + s
        number = number // 4
    while (len(s) < 11):
        s = '0' + s
    return s

#A - 0
#C - 1
#G - 2
#U - 3
#333 333 333 33_(4) = 4194303_(10)
#stop-codons:300,302,320
counter = 0

for i in range(0,4194303 + 1):
    chain = int_in_quat(i)
    if (chain.count('300') + chain.count('302') + chain.count('320') == 0):
        counter += 1
print(counter * 3)
    

