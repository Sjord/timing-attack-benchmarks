set style line 1 \
    linecolor rgb '#0060ad' \
    linetype 1 linewidth 2 \
    pointtype 7 pointsize 1.5

set xlabel "Different character index"
set ylabel "Time in nanoseconds"
set yrange [0:*]
set terminal svg
set output "StringCompare.svg"

plot 'Ordinal.dat' title 'Ordinal', 'CurrentCulture.dat' title 'CurrentCulture'

