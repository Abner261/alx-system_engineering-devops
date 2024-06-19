#!/usr/bin/python3
"""
A function that queries the Reddit API and returns the number of subscribers
(not active users, total subscribers) for a given subreddit.
If an invalid subreddit is given, the function should return 0
"""

import requests


def number_of_subscribers(subreddit):
    """query a subreddit and retrive no of subscribers"""

    # Reddit API endpoint for getting subreddit informatiom
    url = f"https://www.reddit.com/r/{subreddit}/about.json"

    # Set a custom User-Agent to avoid too many requests error
    headers = {'User-Agent': 'My user Agent 1.0'}

    # Make a GET request to the Reddit API
    response = requests.get(url, headers=headers, allow_redirects=False)

    # Check if the response status code is 200 (OK)
    if response.status_code == 200:
        # parse JSON response to extract no of subscribers
        data = response.json().get('data', {})
        sub_count = data.get('subscribers', 0)
        return sub_count
    else:
        return 0
