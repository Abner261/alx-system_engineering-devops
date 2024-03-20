#!/usr/bin/env ruby
# A Ruby script that matches "htn", "hbtn" and not "hbbtn" or others

puts ARGV[0].scan(/hb?tn/).join
