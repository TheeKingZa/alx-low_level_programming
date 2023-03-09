#!/usr/bin/perl -w

use strict;

sub is_palindrome {
    my () = @_;
     = lc();  # convert to lowercase
     =~ s/\W//g;  # remove non-alphanumeric characters
    return ( eq reverse()) ? 1 : 0;
}

# test the function
print is_palindrome("A man, a plan, a canal, Panama!") . "\n";  # prints 1
print is_palindrome("Not a palindrome") . "\n";  # prints 0
print is_palindrome("") . "\n";  # prints 1
