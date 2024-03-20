#!/usr/bin/env ruby
# A Ruby script to match "hbttn, hbtttn, hbttttn, hbtttttn"

puts ARGV[0].scan(/hbt{2,5}n/).join
