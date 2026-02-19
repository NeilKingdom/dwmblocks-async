#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 1

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X) \
    X("💾 ", "free -h | awk '/^Mem/ {print $3\"/\"$2}' | sed s/i//g", 30, 0) \
    X("", "curl 'https://wttr.in?format=3' | awk '{print $2\" \"$3}'", 500, 0) \
    X("📅 ", "date '+%b %d'", 60, 0) \
    X("🕛 ", "date '+%I:%M %p '", 60, 0) \

#endif
