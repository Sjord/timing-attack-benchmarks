<?php

$secret = "1715762622-Mb12K2Epbm46OhMOmzhrBOueEPxCMB";
$len = strlen($secret);
$result = 0;

echo "# (Changed character index) (time in nanosecond per comparison)\n";

for ($x = 0; $x < $len; $x++) {
    $input = $secret;
    $input[$x] = '0';

    $start = microtime(true);
    for ($i = 0; $i < 1e8; $i++) {
        $result ^= $input == $secret;
    }
    $end = microtime(true);

    $time = ($end - $start) * 10; // Convert to nanoseconds
    echo "$x $time\n";
}

echo "# result: $result\n";