#!/usr/bin/env ruby
# A Ruby script with regular expression to match a 10 digit phone number

puts ARGV[0].scan(/^\d{10}$/).join
