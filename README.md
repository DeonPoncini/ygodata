---
Title: ygodata
Description: YuGiOh! Data Structures
Author: Deon Poncini

---
ygodata
===============

Developed by Deon Poncini <dex1337@gmail.com>

Description
-----------
This is a wholly dependent library that is used by the ygodeck builder. It
defines data structures useful in the simulation of the YuGiOh! card game. This
library is split out so it can be shared with not just the deck builder but any
game client that wanted to use the output of the deck builder

Building
--------
This library depends on the user having
[boost](http://www.boost.org/users/download) installed on their system, of at
least version 1.55. This library should be built along side the ygodeck library.

Usage
-----
The serialization functions convert all the data structures into string forms.
CardMap is a data structure used to simulate a set of decks (main, side, extra).
To serialize this to and from JSON for export and import helper functions are
provided.

License
-------
Copyright (c) 2014 Deon Poncini.
See the LICENSE file for license rights and limitations (MIT)
