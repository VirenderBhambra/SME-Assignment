# SME-Assignment
Bug is Fixed.
The bug issue was related to Circular Dependency between PlayerController.h and PlayerView.h.

Later for adding bullet I tried creating bullet headers and source code but it didn't work out well. The bullet files are present outside the game directory. For now, event_service for 'left-click' is done with firebullet function that just generates the bullet sound.