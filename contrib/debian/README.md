
Debian
====================
This directory contains files used to package magnusd/magnus-qt
for Debian-based Linux systems. If you compile magnusd/magnus-qt yourself, there are some useful files here.

## magnus: URI support ##


magnus-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install magnus-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your magnus-qt binary to `/usr/bin`
and the `../../share/pixmaps/magnus128.png` to `/usr/share/pixmaps`

magnus-qt.protocol (KDE)

