OBJDIR := obj
DEPDIR := $(OBJDIR)/.deps
BINDIR := bin
BIN = cligame
CXX = g++
CXXFLAGS = -lncurses
DEPFLAGS = -MT $@ -MMD -MP -MF $(DEPDIR)/$*.d


SRCS = $(wildcard *.cpp)
headers = $(wildcard *.h)
objects = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

binary = $(BINDIR)/$(BIN)
COMPILE.c = $(CC) $(DEPFLAGS) $(CFLAGS) $(CXXFLAGS) $(TARGET_ARCH) -c

out = -o $(binary) $(objects) $(CXXFLAGS)

$(binary): $(objects) | $(BINDIR)
	$(CXX) $(out)

$(objects): | $(OBJDIR)

.PHONY: clean tags test
test: $(binary)
	./$(binary)

clean:
	-rm $(objects) $(binary)

tags: .tags

.tags:
	ctags -Rf .tags --exclude=.git

$(OBJDIR)/%.o : %.cpp
$(OBJDIR)/%.o : %.cpp $(DEPDIR)/%.d | $(DEPDIR)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

$(OBJDIR): ; @mkdir -p $@
$(BINDIR): ; @mkdir -p $@
$(DEPDIR): ; @mkdir -p $@

DEPFILES := $(SRCS:%.cpp=$(DEPDIR)/%.d)
$(DEPFILES):

include $(wildcard $(DEPFILES))

