1. Assume we have two processes, P1 and P2, that have both been initialized, and let's assume that each process on this machine is initially allocated 32 KB of memory as its address space. What are the possible address space ranges each process could have? Write a short paragraph explaining your answer.

	a. P1: 0 - 32,000;
	   P2: 32,001 - 64,000
	
	b. P1: 0 - 64,000;
	   P2: 0 - 64,000
	
	c. P1: 32,001 - 64,000;
	   P2: 0 - 32,000
       
>b. The processes will be using the same virtual memory and their address space will be the same. All process think they have the entire  
memory to work with. 

2. List all of the possible states a process may be in at any point in time. Briefly explain what each of these states mean.
  1. a process could in the New state, which means it has just been created and is waiting to enter the Ready state.
  2. a process could be in the Ready state, which means that it is currently waiting to start Running and is on schedule
  3. a process could be Running, which means it is being given processing time on the CPU, 
  5. it could be Blocked, which means that it is waiting for some external process to finish before it can continue, like an I/O call.
  6. it could be Terminated, which means it is a zombie process that has either finished executing or has been terminated explicitly. It remains 
     in this status until it's parent reads its exit status.

3. On your machine, how much faster does a `printf` call take compared to how long a `write` system call takes?
I ran a test and printf printed a thousand "." fairly quickly, my timer returned 0, whereas the write system call attempted to type "." fails, and indeed prints out the time from the next printf call as well as write of ".". it is also much slower at 0.078125 compared to 0.00000

4. `printf` is a C library function that calls the `write` system call under the hood. What are some possible reasons as to why `printf` runs faster than `write`?
printf probably runs faster because it stores a buffer and calls the write every time it sees a new line, so printf can generate output without making the expensive call of write to the I/O so many times.
Another reason is that the data sent to I/O has to be processed, so fewer data packets being sent by printf might mean less processing time versus the many data packets that write has to send if called multiple times