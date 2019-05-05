#!/usr/bin/ruby

if ARGV.length != 1
	print "usage: #{$0} [FILE]"
	exit 0
end

puts File.foreach(ARGV[0]).inject(0) {|c, line| c+1}

