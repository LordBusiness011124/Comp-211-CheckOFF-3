

# Comp-211-CheckOFF-3



For my COMP 211 check-in, I decided to explore integer overflows and how they can lead to buffer overflows. Initially, I explored exactly what an integer overflow is and how it occurs, specifically looking at unsigned and signed integers, how they react when they reach the end of their limits, and what happens when they go beyond those limits. Following this, I looked at how different overflows can occur and then ended up looking at real-world problems where people exploited these overflows. Finally, I looked at different ways to solve and ensure that these overflows and vulnerabilities do not occur.

One of the most interesting discoveries I found was a real-world exploit that occurred with the FAA, where several airplane machine parts would just stop working after a certain number of days. Instead of having them run continuously, they had to continuously check, turn them off, and turn them back on so the counter never reset. Otherwise, it would crash randomly, which would have occurred as the buffer overflow started writing into neighboring memory.

Video: 
https://www.youtube.com/watch?v=bzcCOGZoFdM

Slides:
https://docs.google.com/presentation/d/1UmcAOIlleEEQ-ZSB9kMTMr6-Xhz7OjooOzg9orrxhZs/edit?usp=sharing

Sources 

https://chatgpt.com/s/cx_6af360e5fea8819199b97845821983ef

https://safeguard.sh/resources/blog/integer-overflow-vulnerabilities-explained

Class knowledge
