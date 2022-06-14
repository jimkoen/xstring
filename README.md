# x::string - a Drop-In Replacement for C++20's std::string



# Ideas / Thoughts
 
## Dynamic memory allocation and SSO
- Why shouldn't a (very large) string be able to dynamically allocate memory if it's supports push/pop operations?
  --> **Turns out thats already the case. Theres something called small / short vector in most compiler implementations
- How does SSO (Small String Optimization) play a role here?
  Shouldn't there be a way to stack-allocate strings the same way std::string
  does, but then on insert, have it extend like a vector? --> literally what happens already lol