#!/usr/bin/python
# createProc5.py If parent dies before the child, the init will be the 
#                new parent.
import os
import time
def main():
    try: 
       chPID = os.fork() 
       if chPID == 0:
          print ('In child: parent PID:', os.getppid())
          time.sleep(5)
          print ('In child: new parent PID:', os.getppid())
       else:
          print ('In parent: parent PID:', os.getpid())
    except:
       OSError 
       print ('fork() fails' )
main()