#!/usr/bin/env ruby
# A Ruby script that matches "hbn, hbtn, hbtttttn" not "hbon"

puts ARGV[0].scan(/hbt*n/).join
