# Define a file resource block for the file '/tmp/school'
file { '/tmp/school':
  # Ensure that the file exists ('file' ensures the file type)
  ensure  => file,
  # Set the file permissions to 0744 (owner: read, write, execute; group/others: read)
  mode    => '0744',
  # Set the owner of the file to 'www-data' user
  owner   => 'www-data',
  # Set the group of the file to 'www-data' group
  group   => 'www-data',
  # Set the content of the file to 'I love Puppet'
  content => 'I love Puppet',
}
