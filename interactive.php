<?php

/**
 * Ask and remember a user's name and say hello
 */

$names = array();
$running = true;

while ($running) {
    // same as: echo "Your name: "
    fputs(STDOUT, "Your name: ");
    $value = trim(fgets(STDIN));

    if ($value == "exit") {
        $running = false;
        fputs(STDOUT, "Bye!\n");
    } elseif (in_array($value, $names)) {
        fputs(STDOUT, "Hello {$value}, we have met before :)\n");
    } else {
        array_push($names, $value);
        fputs(STDOUT, "Hi {$value}!\n");
    }
}
