#!/usr/bin/python
# createProc4.py scheduling of parent and child, time sharing
import os
def main():
    try: 
       chPID = os.fork()
       if chPID == 0:
          msg = 'child running'
          n = 5
       else:
          msg = 'parent running'
          n = 6
       while n > 0:
          print (msg," ",n)
          count = n*10000000
          while count > 0: count = count - 1
          n = n - 1
          print("\n")
    except:
       OSError 
       print ('fork() fails')
main()