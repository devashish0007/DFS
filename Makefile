# *****************************************************************************************
# Project:              CS6150 Lab
# Subtree:              /cs21m017/lab 9
# Filename:             Makefile for DFS
# Programmer:           Devashish Dewangan CS21M017
# Host System:          Linux
# Date Created:         01/Nov/2021
# Project:              Implementation of DFS using Graph ADT 
# *****************************************************************************************

SRCDIR = ./src
OBJDIR = ./obj
BINDIR = ./bin
INCDIR = ./include
CFLAGS = -g -c -I$(INCDIR)
CC = g++

all: 	$(BINDIR)/DFS 

$(BINDIR)/DFS: $(OBJDIR)/dfs.o $(OBJDIR)/graph.o

	$(CC) -g -o $(BINDIR)/DFS $(OBJDIR)/dfs.o $(OBJDIR)/graph.o -I$(INCDIR)

$(OBJDIR)/dfs.o: 		$(SRCDIR)/dfs.C
	$(CC) $(CFLAGS) -o $(OBJDIR)/dfs.o $(SRCDIR)/dfs.C

$(OBJDIR)/graph.o: 		$(SRCDIR)/graph.C
	$(CC) $(CFLAGS) -o $(OBJDIR)/graph.o $(SRCDIR)/graph.C

clean: 
	rm -fr $(BINDIR)/* $(OBJDIR)/* 




