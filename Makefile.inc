# Any object files you need to link in should go here.
# Separate them with spaces.
# eg. mytrinket.o mygadget.o
APPL_COBJS +=

# Any libraries you need to link in go here.
# These are used as compiler options, so use '-' and separate with spaces.
# eg. -lm -lc
LIBS +=

# Any include directories you need go here.
# Prefix them with -I(your directory here).
# You can use $(APPLDIR) to get the project root directory.
# As always, separate with spaces.
# eg. -I$(APPLDIR)/mylib
INCLUDES +=

# Any source directories containing .c files you need should go here.
# You can still use $(APPLDIR). Do not prefix them with anything, just separate with spaces.
# These are used by the makefile, not the compiler.
# eg. $(APPLDIR)/mylib
SRCDIRS +=

# Any compiler options you need should go here.
# As always, separate with spaces.
# eg. -O3 -Wall -Wextra
COPTS +=