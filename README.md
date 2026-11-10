

# Comp-211-CheckOFF-3



For my comp 211 check-in, I decided to explore integer overflows and how that will lead to buffer overflows. Initially, I explored exactly what an integer overflow how it occurs specifically looking at unsigned and signed integers how they react when they get to the end of their limits and what happens whenever they go beyond their limits following this operation looked at how different overflows can occur and then ended up looking at real world problems where people exploited these overflows and finally, I looked at different ways to solve, and ensure these overflows in vulnerability don't occur. One of the most interesting discoveries I found was a real world exploit that this occurred with the FAA where several airplane machine parts just wouldn't work after a certain number of days and so instead of having them run continuously, they had to continuously check turn them off and turn them back on so the counter never reset, and it crashed randomly which would've occurred as the buffer overflow started writing into neighboring memory. 

Slides:
https://docs.google.com/presentation/d/1UmcAOIlleEEQ-ZSB9kMTMr6-Xhz7OjooOzg9orrxhZs/edit?usp=sharing

Sources 

https://chatgpt.com/s/cx_6af360e5fea8819199b97845821983ef

https://safeguard.sh/resources/blog/integer-overflow-vulnerabilities-explained

Class knowledge
