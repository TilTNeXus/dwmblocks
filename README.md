# dwmblocks
Modular status bar for dwm written in c.
My version of DistroTube's dwmblocks

# Modifying dwmblocks
The statusbar is made from text output from scripts found in my ~/.local/bin Blocks are added and removed by editing the blocks.h header file.

# To get my dwmblocks to work for you...
You will, of course, need my dwmblocks build and my scripts in ~/.local/bin.  Make sure that .local/bin is in your $PATH otherwise you can't call those scripts by name which is what I'm doing in blocks.h.  Instead, you'd have to write out the full path to each script in the blocks.h.
