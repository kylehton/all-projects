with open('encodedtext.txt', 'r') as file:
     alltext = file.readlines()
     fulldict = {}
     largestnum = 0
     for i in range(len(alltext)):
          if not (alltext[i].isspace()):
               currentstr = alltext[i].split()
               currentkey = int(currentstr[0])
               fulldict[currentkey] = currentstr[1]
               if currentkey > largestnum:
                    largestnum = currentkey
         
     fulldict = dict(sorted(fulldict.items()))

     num = 1
     i = 2
     while (num < largestnum):
          print(fulldict[num])
          num += i
          i += 1     
     if (num>=largestnum):
          print(fulldict[largestnum])
     
     