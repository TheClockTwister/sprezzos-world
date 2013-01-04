#!/bin/sh
echo Running 'java antlr.Tool $*' with /usr/share/java/antlr.jar appended to the CLASSPATH variable
export CLASSPATH
CLASSPATH=$CLASSPATH:/usr/share/java/antlr.jar
exec gij antlr.Tool "$@"
