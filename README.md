EasymSelection
==============

Now you can easily use mSelection without the need of callback. 

Instruction:

- Place #include <EasymSelection.inc> after mSelection include.
- You don't need to remove the callbacks because this include does have ALS hooking.
- Now you can use like this:

menuEx(Place your ID here) - This is used instead of OnPlayerModelSelectionEx
menu(Place your ID here) - This is used instead of OnPlayerModelSelection

Bugs:

I still don't know if there is some bug.

Issues:

Q. My selection is not responsing, what could be the issue? I've checked the ID and stuff, they all are OK.
A. Just do "#undef EasymSelection_LENGTH" and "#define EasymSelection_LENGTH LengthHere" accordingly to your command length and ID.

Q. How to enable debug mode?
A. You can enable debug mode by going inside include and edit #define EasymSelection_DEBUG false to true OR, just undefine it and define it again.


Credits:

d0 - For mSelection include.
iZN - This include.
