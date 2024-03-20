#!/usr/bin/env ruby
# A Ruby script that matches "hbtn, hbttn, hbtttn, hbttttn" not "hbn"

puts ARGV[0].scan(/hbt+n/).join
