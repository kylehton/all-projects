with open('encodedtext.txt', 'r') as file:
     alltext = file.readlines()
     fulldict = {}
     largestnum = 0
     for i in range(len(alltext)):
          currentstr = alltext[i]
          fulldict[int(currentstr[:1])] = currentstr[2:len(currentstr)-1]
          if int(currentstr[:1]) > largestnum:
               largestnum = int(currentstr[:1])
     
     fulldict = dict(sorted(fulldict.items()))

     print(fulldict)

     num = 1
     i = 2
     while num <= largestnum:
          print(fulldict[num])
          num += i
          i += 1
          if (num>largestnum):
               print(fulldict[largestnum])

#dictlist = {1: "one", 2:"two", 3: "three"}
#print(dictlist[1])
#dictlist[4] = "four"
#print(dictlist[4])

     